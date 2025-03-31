#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*輸入*/ 
    char id[100];
    char name[10];
    float height;
    float weight;
    char blood;
    printf("Please enter your student ID: ");/*輸入學號*/
    scanf_s("%s", id);
    printf("Please enter your name:");/*輸入名字*/
    scanf_s("%s", name);
    printf("Please enter your height:");/*輸入身高*/
    scanf_s("%f", &height);
    printf("Please enter your weight:");/*輸入體重*/
    scanf_s("%f", &weight);
    printf("Please enter your blood type:");/*輸入血型*/
    scanf_s(" %c", &blood);/*換行會輸入一個要用_隔開*/

    printf("\n");
    /*輸出*/
    printf("Student ID:%s\n",id);/*印出學號*/
    printf("Name:%s\n",name);/*印出姓名*/
    printf("Height:%f\n",height);/*印出身高*/
    printf("Weight:%f\n",weight);/*印出體重*/
    printf("Blood:%c\n",blood);/*印出血型*/
    printf("BMI:%f\n",weight/((height/100)*(height/100)));/*印出BMI*/

    return 0;
}