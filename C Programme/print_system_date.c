#include<windows.h>
#include<stdio.h>
void main()
{
    SYSTEMTIME stime;
    GetSystemTime(&stime);
    printf("%d / %d / %d",stime.wHour,stime.wMinute,stime.wSecond );
    printf("\n%d / %d / %d ",stime.wDay,stime.wMonth,stime.wYear);
}