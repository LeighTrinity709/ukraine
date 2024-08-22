//LeighTrinity
//21серпень2024

#include<stdio.h>
#include<string.h>

int main (int argc, char *argv[])
{
	int x = 0;
	char buffer[64];
	
	strcpy(buffer,argv[1]);
	
	if (x>0)
	printf("ви виконали це завдання\nзмінна перезаписана: 0x%x\n",x);
	else
	printf("не вдалося спробувати ще раз. змінна все ще:%d\n",x);



}
