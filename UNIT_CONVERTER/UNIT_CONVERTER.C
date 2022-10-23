#include <stdio.h>
float b1 = 0.1;
float b2 = 0.001;
float b3 = 0.000001;
float b4 = 10;
float b5 = 0.01;
float b6 = 0.00001;
float b7 = 1000;
float b8 = 100;
float b9 = 0.001;
float b10 = 1000000;
float b11 = 100000;
float b12 = 1000;
float MM_CM(float a, float b1) { return (a * b1); }
float MM_M(float a, float b2) { return (a * b2); }
float MM_KM(float a, float b3) { return (a * b3); }
float CM_MM(float a, float b4) { return (a * b4); }
float CM_M(float a, float b5) { return (a * b5); }
float CM_KM(float a, float b6) { return (a * b6); }
float M_MM(float a, float b7) { return (a * b7); }
float M_CM(float a, float b8) { return (a * b8); }
float M_KM(float a, float b9) { return (a * b9); }
float KM_MM(float a, float b10) { return (a * b10); }
float KM_CM(float a, float b11) { return (a * b11); }
float KM_M(float a, float b12) { return (a * b12); }
float main() {
 float a, c, n;
 printf("Select the option given below.\n "
 " To convert MM to CM Press 1\n "
 " To convert MM to M Press 2\n "
 " To convert MM to KM Press 3\n "
 " To convert CM to MM Press 4\n "
 " To convert CM to M Press 5\n "
 " To convert CM to KM Press 6 \n"
 " To convert M to MM Press 7\n "
 " To convert M to CM Press 8\n "
 " To convert M to KM Press 9 \n"
 " To convert KM to MM Press 10 \n"
 " To convert KM to CM Press 11\n "
 " To convert KM to M Press 12\n ");
 scanf("%f", &n);
 if (n == 1) {
 printf(" Please enter number you want to convert ");
 scanf("%f", &a);
 c = MM_CM(a, b1);
 printf(" The anwser is %f ", a * b1);
 }
 if (n == 2) {
 printf(" Please enter number you want to convert ");
 scanf("%f", &a);
 c = MM_M(a, b2);
 printf(" The anwser is %f ", a * b2);
 }
 if (n == 3) {
 printf(" Please enter number you want to convert ");
 scanf("%f", &a);
 c = MM_KM(a, b3);
 printf(" The anwser is %f ", a * b3);
 }
 if (n == 4) {
 printf(" Please enter number you want to convert ");
 scanf("%f", &a);
 c = CM_MM(a, b4);
 printf(" The anwser is %f ", a * b4);
 }
 if (n == 5) {
 printf(" Please enter number you want to convert ");
 scanf("%f", &a);
 c = CM_M(a, b5);
 printf(" The anwser is %f ", a * b5);
 }
 if (n == 6) {
 printf(" Please enter number you want to convert ");
 scanf("%f", &a);
 c = CM_KM(a, b6);
 printf(" The anwser is %f ", a * b6);
 }
 if (n == 7) {
 printf(" Please enter number you want to convert ");
 scanf("%f", &a);
 c = M_MM(a, b7);
 printf(" The anwser is %f ", a * b7);
 }
 if (n == 8) {
 printf(" Please enter number you want to convert ");
 scanf("%f", &a);
 c = M_CM(a, b8);
 printf(" The anwser is %f ", a * b8);
 }
 if (n == 9) {
 printf(" Please enter number you want to convert ");
 scanf("%f", &a);
 c = M_KM(a, b9);
 printf(" The anwser is %f ", a * b9);
 }
 if (n == 10) {
 printf(" Please enter number you want to convert ");
 scanf("%f", &a);
 c = KM_MM(a, b10);
 printf(" The anwser is %f ", a * b10);
 }
 if (n == 11) {
 printf(" Please enter number you want to convert ");
 scanf("%f", &a);
 c = KM_CM(a, b11);
 printf(" The anwser is %f ", a * b11);
 }
 if (n == 12) {
 printf(" Please enter number you want to convert ");
 scanf("%f", &a);
 c = KM_M(a, b12);
 printf(" The anwser is %f ", a * b12);
 }
 return 0;
}