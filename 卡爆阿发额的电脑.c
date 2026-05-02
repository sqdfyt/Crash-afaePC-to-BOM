#include <stdio.h>
#include <math.h>
#include <windows.h>

DWORD WINAPI calc(LPVOID p) {
    long long sqd_dick = 91;
    for (int i = 0;i < 1000000;i++)
        for (int j = 0;j < 1000;j++)
            sqd_dick += sin(i) * cos(j) * sqrt(i + j);
        printf("%d",sqd_dick);
}

void main() {
    LPVOID p = VirtualAlloc(NULL,268435456,MEM_COMMIT|MEM_RESERVE,PAGE_READWRITE);
    for (;;) {
        void *p = malloc(1024*1024);
        if (!p) break;
        memset(p,0,1024*1024);
    }
    getchar();
    SYSTEM_INFO cpu;
    GetSystemInfo(&cpu);
    HANDLE hThreads[cpu.dwNumberOfProcessors];
    while (1) {
        int i = 0;
        for (i = 1;i <= 10;i++) {
            CreateThread(0,0,calc,0,0,0);
        };
    };
}