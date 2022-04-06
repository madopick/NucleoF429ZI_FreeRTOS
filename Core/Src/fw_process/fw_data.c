/*
 * fw_data.c
 *
 *  Created on: Apr 5, 2022
 *      Author: madop
 */

#include "fw_data.h"
#include "arm_math.h"
#include "processor.h"
#include "dwt_counter.h"

const float32_t DIFF_BASELINE[TX_SZ][RX_SZ] = {
  { -171, 25, 20, 20, 18, 15, 17, 17, 9, 11, 9, 15, 9, 6, 6, 10, 6, 5, 8, 2, 4, -1, 6, 1, 0, 0, -5, -3, -7, -12 },
  { -29, 4, 7, 0, 6, 2, 3, 1, 3, 3, 1, 1, 2, 3, -1, 4, -2, 1, 5, -3, 0, 1, -2, 2, 1, 0, 0, 2, -3, -4 },
  { -166, 23, 18, 22, 17, 15, 17, 14, 10, 12, 13, 7, 8, 6, 12, 2, 9, 6, 6, 0, 3, 6, -1, 2, 4, -3, -1, -3, -6, -13 },
  { 29, -4, -6, -5, -1, -2, -2, -1, -3, -3, 5, -6, -1, -3, -1, 1, -3, -1, 0, 1, -4, -3, 5, -3, 0, 1, 2, 2, -3, 3 },
  { -26, 2, 5, 1, 5, 4, 0, 0, 3, -1, 6, -1, 3, 1, 2, 1, 1, 5, 0, 1, -4, -1, 1, 3, 0, -1, 4, -5, -3, 2 },
  { 47, -7, -5, -3, -5, -4, -7, -1, -3, -6, -1, -3, -1, -4, -3, -6, 1, 0, -3, -2, 3, -1, -3, 0, -3, 2, -2, 3, 2, 6 },
  { 5, -1, 2, -4, 1, 0, -2, 0, 3, -4, 1, 4, -5, 3, -1, -1, -5, 4, 3, -5, 3, 0, 0, 0, -2, 0, 0, 2, -1, 1 },
  { 152, -23, -18, -18, -14, -19, -9, -14, -9, -9, -10, -8, -5, -15, -2, -9, -5, -4, -6, -2, -1, -3, -1, -2, -3, 3, -1, 7, 8, 9 },
  { 119, -13, -18, -12, -8, -15, -15, -6, -12, -8, -3, -12, -3, -4, -8, -8, -4, -1, -8, -1, -2, 0, -1, -2, -3, 1, -1, 4, 7, 6 },
  { -33, 6, 6, -2, 5, 3, 4, 3, 1, 4, 4, 0, -2, 4, 0, 1, 4, 1, 0, 3, -3, 1, 0, 3, -1, -2, 3, -4, -2, -1 },
  { -92, 16, 9, 11, 8, 12, 7, 6, 6, 7, 9, 4, 3, 5, 3, 4, -1, 4, 5, 3, 1, -3, 7, -5, 4, 1, -2, -3, -2, -8 },
  { 104, -14, -13, -12, -11, -9, -11, -6, -10, -5, -7, -5, -8, -3, -5, -5, -2, -9, -1, 2, -2, -3, -1, -1, -3, 2, 4, 1, 7, 4 },
  { 26, 0, -3, -6, 0, -4, -4, -2, 1, -2, -2, -3, -5, 2, -1, -1, -1, 0, -5, -1, 0, 4, -3, 1, -2, -3, 2, 2, 2, 0 },
  { 56, -2, -12, -9, -6, -8, -2, -1, -6, -1, -6, -5, -3, -2, -2, -2, -2, 1, -7, 1, 0, 2, -6, 0, 1, -2, 0, 6, -1, 5 },
  { 41, -3, -6, -8, -4, -4, -1, -5, -4, -2, -2, -4, -1, -7, -1, 1, -4, 0, -2, 2, -1, -3, 0, -3, 2, -4, 5, 1, 2, 4 },
  { -57, 5, 11, 5, 10, 4, 1, 8, 4, 4, 1, 3, 3, 3, 5, 1, 2, 1, 0, 4, 3, -4, 3, -1, 4, -2, -3, 1, -2, -5 },
};


const float32_t RAWDATA[TX_SZ][RX_SZ] = {
  { 409, -51, -50, -50, -53, -28, -50, -34, -23, -20, -27, -29, -22, -9, -22, -21, -16, -13, -22, 1, -7, -1, -8, -18, 1, -8, 23, 8, 13, 32 },
  { -292, 38, 25, 43, 36, 27, 32, 10, 23, 25, 13, 20, 11, 27, 8, 11, 16, 4, 8, 20, -8, 12, 10, -9, 8, -8, 0, -7, -14, -22 },
  { -451, 65, 51, 53, 54, 47, 28, 36, 28, 45, 31, 16, 17, 38, 3, 28, 14, 16, 13, 1, 27, -1, -2, 21, -2, -2, -11, -7, -32, -32 },
  { 345, -37, -60, -81, -83, 15, 0, -12, -14, -33, -28, -20, -4, -27, -13, -14, -3, -9, -13, -22, 3, 0, -6, 20, 9, -22, -11, 8, 6, 24 },
  { -442, 67, 15, -300, -249, 335, 395, 91, 36, 24, 36, 25, 30, 17, 24, 16, 15, 11, 20, 13, 8, -5, 43, 173, 166, -153, -175, -43, -37, -29 },
  { 417, -61, -134, -639, -339, 249, 582, 63, -35, -14, -22, -16, -22, -27, -12, -9, -31, -1, -10, -6, -9, -13, 43, 301, 145, -152, -284, -42, 22, 24 },
  { -171, 37, -32, -338, -261, 315, 355, 76, 6, 20, 11, 15, -1, 9, 7, 19, 10, -1, 4, -2, 6, 18, 19, 175, 154, -140, -181, -31, -7, -28 },
  { 157, -21, -34, -59, -64, 34, 26, -2, 0, -25, -7, 1, -15, -3, -12, -8, 0, 2, -10, -6, -7, 12, 1, 22, 12, -12, -22, -9, 6, 10 },
  { 203, -36, -11, -26, -17, -33, -13, -12, -16, -16, -10, -19, -13, 1, -21, -6, 2, -12, -8, 0, -2, -4, -3, 4, -2, -11, 4, -1, 25, 15 },
  { -294, 28, 54, 52, 61, 3, -4, 26, 22, 19, 27, 21, 8, 19, 8, 8, 24, 11, 1, 16, 2, -6, 3, -46, -46, 64, 27, -1, -21, -15 },
  { 433, -55, -28, 120, 117, -201, -207, -47, -26, -44, -20, -16, -34, -16, -17, -16, -19, -1, -8, -21, -8, 2, -64, -353, -309, 300, 362, 66, 19, 21 },
  { 49, 5, 60, 284, 145, -139, -312, -46, -1, -1, -5, 0, 5, -11, 9, -11, 18, -9, 9, -18, 1, -2, -99, -590, -308, 313, 596, 106, -1, 1 },
  { -221, 22, 59, 197, 191, -124, -155, -2, 8, 20, 18, 21, 3, 16, 5, 12, 18, 13, -3, 16, -6, 20, -54, -353, -288, 302, 331, 59, -29, -12 },
  { -401, 49, 60, 68, 66, 19, 14, 26, 36, 28, 22, 28, 10, 22, 13, 35, -2, 16, 11, 19, 0, 5, 5, -44, -45, 56, 24, 15, -20, -37 },
  { -472, 65, 69, 37, 52, 58, 43, 37, 34, 31, 32, 22, 20, 14, 25, 35, 16, 0, 14, 24, -7, 23, -3, 7, 6, -3, 2, -18, -20, -47 },
  { -153, 22, 11, 21, 15, 19, 15, 21, 10, 2, 6, 7, 17, -3, 6, 13, 4, 15, -6, 13, -13, 19, -16, 19, -11, 14, -5, -15, -1, -21 },
};

const float32_t FILTERED_REF[TX_SZ][RX_SZ] = {
  { -39.50009924, -28.76084558, -20.63762548, -9.920422529, 4.210013002, -4.81265589, 11.8101697, 15.77995059, 4.649351155, -4.368441606, -5.804140098, 3.026063683, 1.883532936, -12.04775069, -10.82784925, -4.189286713, -3.704804684, -4.535032604, 8.873742642, -3.113327301, -2.983241838, -11.01871723, -3.126665765, 12.5273399, 12.19628224, 23.70973004, 4.450543509, 3.59280689, -1.785820981, -24.47136911 },
  { 4.005216681, 0.936995018, 10.04692571, -4.275422726, -7.288240479, -7.050361492, -11.96356028, 0.620157647, 1.143407745, -1.476656314, 4.243136469, 1.938388355, 8.038545191, -1.578333956, 2.077351471, 6.409081775, -1.148426659, 4.546822776, 9.058636443, -7.060495347, 5.424460356, -1.584060433, -11.09002911, 0.094604872, -7.168735729, -1.663731033, -5.085209083, -1.801185751, 1.76073907, 9.889978811 },
  { 9.580361697, 1.998700797, 0.587178109, -0.656984144, -8.752375706, -13.44322735, -0.074792423, 1.062616116, 4.613671714, -7.472467903, -6.393664114, 1.875219789, 8.694937523, -8.010029276, 13.58426975, -0.019622846, 5.364742519, 4.593743781, 5.403454082, 10.74971162, -7.521834064, 2.597032629, 5.794988065, -11.76953796, -7.274686646, -11.03123558, -6.196976786, -8.900017711, 6.428514532, 14.58830978 },
  { -13.77796556, -14.82647567, 2.831965286, 40.48334984, 84.19613091, 38.49771384, 11.32721445, -1.018284138, -11.64774861, -2.734268556, 10.17597449, 6.137224085, -6.960536502, 1.672995845, 0.098429377, 2.868786073, -7.448917262, -8.665376957, -3.653173784, 12.59554838, 1.447988426, -4.580333793, 4.30337064, -18.25053125, -27.03384228, -4.266763108, 11.3932205, 11.58493029, 10.95677579, 1.804045276 },
  { 56.36490063, 42.38469643, 72.14086568, 370.5800878, 615.1177622, 322.2050854, -12.37876872, -52.61477017, -41.54305505, -27.25849442, -21.54735783, -15.23267062, -12.83072135, -2.538856847, -0.595962234, 5.744843554, 10.82578741, 21.59659819, 16.90867164, 18.08580335, 17.55584543, 31.08161211, -1.141270319, -161.1934037, -328.8512713, -203.7349316, -52.08878647, -29.54732297, -12.66268525, -0.426731538 },
  { 61.45937863, 71.03380706, 144.6695444, 661.8123259, 893.5380001, 597.3552175, 15.21474554, -52.38833823, -29.56659718, -31.50756893, -21.66241339, -19.76216648, -9.940077396, 2.314288621, 1.867126045, -3.329574712, 20.77534181, 16.38785044, 19.41553349, 21.36614343, 33.18169893, 47.68652026, 8.856802587, -278.1904768, -430.7829302, -303.9398312, -50.85947665, -7.584284032, -19.7887513, -28.92410999 },
  { 26.06576929, 14.0520455, 60.82891865, 367.1781485, 598.4633038, 301.629458, -15.26743043, -58.84839481, -35.67151761, -35.90191977, -25.16998667, -17.62045513, -5.216589398, 3.610557642, 9.101363585, 1.733798785, -2.002693479, 12.51796908, 20.37819215, 25.60886196, 30.3277841, 20.12015262, 8.35960059, -156.7216868, -313.8346898, -197.7464223, -40.77422156, -17.56407039, -19.91940237, -4.449859893 },
  { -11.75320505, -12.12106796, 2.429602349, 38.35230888, 81.58570897, 30.21397843, -1.213685547, -9.960337186, -15.88996121, 1.75774023, 0.765102921, -6.055497504, 5.333848122, -4.644859342, 6.57246126, 7.081304795, 3.683351935, -0.758686339, 4.402021277, 9.59242201, 16.84787626, 3.87045929, 3.199489753, -19.06215497, -33.99132774, -21.40549987, -3.177623142, 10.95426215, 12.88839714, 12.30325747 },
  { -2.935564163, 7.163469144, -7.139895182, -1.741921509, -0.938299492, 8.46597087, -0.570062806, -1.313652071, -3.52591384, -1.503321387, -0.079770344, 1.737752124, 6.852564043, -2.06392081, 6.875246273, 1.747250075, -6.833256042, 1.43240143, -0.491444945, -2.992531578, -4.164553371, -1.072882087, 0.572111485, -5.111176738, -5.819706887, 6.455991895, 3.58708261, 10.96228321, -1.517212677, -6.03703723 },
  { 14.77189545, 20.6398982, 3.867365089, -18.53488012, -43.64665616, -18.72988613, 10.50231338, 8.300616035, 6.875810786, 9.955499741, 4.108530536, -1.009818482, 3.170298632, 1.174531615, 4.621162668, 7.719077268, -3.084035509, -5.612564264, -0.819153122, -9.042056244, -11.09243966, -3.005087289, -5.939904092, 40.35555206, 84.13215794, 22.28070429, -3.210622088, -11.8097699, -2.312097252, 1.786418859 },
  { -160.1677287, -132.1622006, -131.0906816, -255.5140457, -374.0333012, -195.7442846, -25.57983655, -10.0976089, -11.89885233, 6.926168722, 6.67283822, -0.147685257, 11.2318496, 8.755380629, 6.833441147, 6.271821488, 4.994943922, -7.836665355, -12.16158866, -5.184579616, -12.21504038, -32.93153668, 19.58543318, 345.0276888, 656.8720253, 402.4443205, 80.94671139, 24.99531499, 12.70402552, -4.848448758 },
  { -49.83209777, -49.72275632, -95.51880742, -336.1256561, -445.0572313, -297.0610238, -3.214860301, 34.65177649, 26.18532027, 23.28838493, 22.5112175, 18.72120235, 6.882736478, 14.71860531, 0.471249581, 4.594247446, -17.64701244, -22.05008402, -37.93415031, -26.87555171, -40.3470314, -55.04001303, 23.00625534, 581.3740201, 894.1080189, 639.5762046, 111.55723, 17.53381779, 21.71176364, 20.94942366 },
  { -24.66253966, -13.97986998, -37.82386078, -185.3201141, -319.0520171, -169.3922985, -2.84604695, 14.66469264, 24.53367241, 19.24954283, 15.06462603, 5.969591888, 11.01352639, 8.794037034, 12.78015493, 8.385052082, -3.555714794, -11.63800282, -11.17518508, -27.55095871, -24.35164805, -45.3779803, -4.953426199, 330.2285736, 616.846164, 352.5243808, 55.89738143, -0.223753459, 19.62627548, 22.21072768 },
  { 39.03997335, 37.06380866, 15.81772041, -11.12562675, -35.35161975, -20.67530742, 0.519086585, 8.225082334, -0.590735851, 1.013597492, 1.394350007, -5.146034695, 5.460464983, 3.287941538, 7.742807212, -11.16753164, 3.598679194, 1.794187407, -5.033209267, -14.1026769, -8.01649889, -6.913461589, -15.8036417, 26.45850473, 71.01950446, 15.9692452, -10.77291101, -27.30533414, -22.2771937, -0.391103256 },
  { 31.82044983, 22.30938194, 4.807950289, 11.49720306, 5.039888135, -9.176540274, -8.783782413, -9.205619934, -8.411392193, -5.393339921, -5.831340305, -1.011062063, 6.191317473, 11.03220815, 8.759567739, -3.532397227, -4.636753977, 11.30734734, 9.576762121, -0.290843182, 14.62956926, -3.556684227, 3.670340357, -3.884091599, -8.375541297, -12.83945308, -16.71799116, -9.038792911, -2.138327321, 26.31179915 },
  { 1.895255605, -2.664796739, 6.438981589, 0.625761362, 4.725355009, -0.939655053, -5.879827432, -10.25080236, -8.474793893, 0.285036843, 1.709141105, 3.626373225, -4.52380027, 6.188383557, 9.661677242, 2.087136504, 3.754414703, -6.671343706, 1.745487178, -4.799793724, 12.41300539, -8.406891676, 10.64874961, -8.088984273, 5.975320915, -9.909712039, -10.14075896, 2.127546459, -1.525457025, 8.368990854 },
};

extern UBaseType_t uxHighWaterMarkAFE;
extern SemaphoreHandle_t afeSemaphore;
extern float32_t afe_raw_data[TX_SZ][RX_SZ];

struct Processor hproc;

void AFE_Thread(void *argument)
{
	uxHighWaterMarkAFE = uxTaskGetStackHighWaterMark( NULL );
	for(;;)
	{
		if (afeSemaphore != NULL)
		{
			if(xSemaphoreTake(afeSemaphore,portMAX_DELAY) == pdTRUE ){

				uxHighWaterMarkAFE = uxTaskGetStackHighWaterMark( NULL );

				if (PROC_Init(&hproc) == HAL_OK){
					PROC_SetThreshold(&hproc, 200, 50, 50);
					DWT_Start();

					//PROC_SetData(&hproc, (float32_t*) RAWDATA, (float32_t*) DIFF_BASELINE);
					memcpy(&afe_raw_data[0][0], &RAWDATA[0][0], TX_SZ*RX_SZ*sizeof(afe_raw_data[0][0]));
					PROC_SetData(&hproc, (float32_t*) afe_raw_data, (float32_t*) DIFF_BASELINE);

					PROC_DifferentialStrength(&hproc);
					PROC_Integrated(&hproc);
					PROC_Average(&hproc);
					PROC_Reconstructed(&hproc);
					PROC_CurveCompare(&hproc);
					PROC_CurveFinal(&hproc);
					PROC_Filtered(&hproc);
					DWT_Stop();

					PROC_Profiler(&hproc);
					PROC_DeInit(&hproc);
				}else{
					printf("AFE malloc Fail!!!\r\n");
				}
			}
			vTaskDelay(10);
		}
	}
}
