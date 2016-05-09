/*******************************
 **  볼링점수 계산프로그렘    **
 **  작성자 : 김태준          **
 **  작성일 :  2016년 5월 9일 **
 *******************************/
#include<stdio.h>
int main ( )
{
	int n=0, score=0, input1=0, input2=0, bonus=0, remain=0, input3=0;
	while(n<10)
	{
		n++;
		printf("%d 번째 프레임 1번쨰 처리 핀수 :", n);
		scanf("%d", &input1);
		score=score+input1*(1+bonus+remain);
		bonus=remain;
		remain=0;
		printf(" ****현재까지 점수 : %d \n", score);
		if(input1 != 10)
		{	
			printf("%d 번쨰 프레임 2번째 처리 핀수:", n);
			scanf("%d", &input2);
			
			if(input1+input2 != 10)
			{
				score=score+input2*(1+bonus+remain);
				printf(" ****현재까지 점수 : %d \n", score);
				bonus=0, remain=0;
			}
			
			else
			{
				score=score+input2*(1+bonus+remain);
				printf(" **** 현재까지 점수 : %d \n", score);
				bonus=bonus+1, remain=0;
																}
		}
		else
			remain=remain+1;

		if(n==10)
	{
		if(input1==10)
		{
			printf("%d 번쨰 프레임 2번째 처리 핀수:", n);
			scanf("%d", &input2);
			score=score+input2*(1+bonus+remain);
			printf(" **** 현재까지 점수 : %d \n", score);
			printf("%d 번째 프레임 3번째 처리 핀수:", n);
			scanf("%d", &input3);
			score=score+input3;
			printf(" **** 최종점수 : %d \n", score);
															}		
			
		if(input1+input2==10)
		{
			printf("%d 번째 프레임 3번째 처리 핀수:", n);
			scanf("%d", &input3);
			score=score+input3;
			printf(" **** 최종점수 : %d \n", score);
															}
																}
}
}
