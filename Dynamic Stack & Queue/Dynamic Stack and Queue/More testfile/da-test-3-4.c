#include <stdio.h>
#include <stdlib.h>
#include "da.h"
#include "integer.h"
#include "real.h"
#include "string.h"
extern long random(void);
extern void srandom(unsigned int seed);

int
main(void)
    {
    printf("DA tester: 3,4\n");
    printf("you can retrieve this test with:\n");
    printf("wget beastie.cs.ua.edu/cs201/testing/0/da-test-3-4.c\n");
    printf("\noutput:\n\n");
    DA *d = newDA(displayINTEGER);
    insertDA(d,newINTEGER(607));
    insertDA(d,newINTEGER(758));
    insertDA(d,newINTEGER(280));
    insertDA(d,newINTEGER(177));
    insertDA(d,newINTEGER(842));
    insertDA(d,newINTEGER(68));
    insertDA(d,newINTEGER(664));
    insertDA(d,newINTEGER(680));
    insertDA(d,newINTEGER(880));
    insertDA(d,newINTEGER(870));
    insertDA(d,newINTEGER(100));
    insertDA(d,newINTEGER(526));
    insertDA(d,newINTEGER(636));
    insertDA(d,newINTEGER(92));
    insertDA(d,newINTEGER(399));
    insertDA(d,newINTEGER(694));
    insertDA(d,newINTEGER(650));
    insertDA(d,newINTEGER(923));
    insertDA(d,newINTEGER(459));
    insertDA(d,newINTEGER(682));
    insertDA(d,newINTEGER(712));
    insertDA(d,newINTEGER(226));
    insertDA(d,newINTEGER(495));
    printf("array d:");
    visualizeDA(stdout,d);
    printf("\n");
    DA *e = newDA(displayINTEGER);
    insertDA(e,newINTEGER(573));
    insertDA(e,newINTEGER(692));
    insertDA(e,newINTEGER(270));
    insertDA(e,newINTEGER(413));
    insertDA(e,newINTEGER(25));
    insertDA(e,newINTEGER(641));
    insertDA(e,newINTEGER(3));
    insertDA(e,newINTEGER(581));
    insertDA(e,newINTEGER(601));
    insertDA(e,newINTEGER(113));
    insertDA(e,newINTEGER(213));
    insertDA(e,newINTEGER(778));
    insertDA(e,newINTEGER(308));
    insertDA(e,newINTEGER(282));
    insertDA(e,newINTEGER(794));
    insertDA(e,newINTEGER(340));
    insertDA(e,newINTEGER(162));
    insertDA(e,newINTEGER(664));
    insertDA(e,newINTEGER(440));
    insertDA(e,newINTEGER(688));
    insertDA(e,newINTEGER(653));
    insertDA(e,newINTEGER(885));
    insertDA(e,newINTEGER(440));
    insertDA(e,newINTEGER(347));
    insertDA(e,newINTEGER(535));
    insertDA(e,newINTEGER(715));
    insertDA(e,newINTEGER(158));
    insertDA(e,newINTEGER(569));
    insertDA(e,newINTEGER(780));
    insertDA(e,newINTEGER(736));
    insertDA(e,newINTEGER(417));
    insertDA(e,newINTEGER(353));
    insertDA(e,newINTEGER(428));
    insertDA(e,newINTEGER(687));
    insertDA(e,newINTEGER(766));
    insertDA(e,newINTEGER(805));
    insertDA(e,newINTEGER(680));
    insertDA(e,newINTEGER(122));
    insertDA(e,newINTEGER(386));
    insertDA(e,newINTEGER(633));
    insertDA(e,newINTEGER(235));
    insertDA(e,newINTEGER(600));
    insertDA(e,newINTEGER(764));
    insertDA(e,newINTEGER(895));
    insertDA(e,newINTEGER(882));
    insertDA(e,newINTEGER(558));
    printf("array e:");
    visualizeDA(stdout,e);
    printf("\n");
    printf("performing unionDA(d,e)\n");
    unionDA(d,e);
    printf("\n");
    printf("array d: ");
    displayDA(stdout,d);
    printf("\n");
    printf("array e: ");
    displayDA(stdout,e);
    printf("\n");
    printf("performing unionDA(d,e)\n");
    unionDA(d,e);
    printf("\n");
    printf("array d: ");
    displayDA(stdout,d);
    printf("\n");
    printf("array e: ");
    displayDA(stdout,e);
    printf("\n");
    printf("performing unionDA(e,d)\n");
    unionDA(e,d);
    printf("\n");
    printf("array d: ");
    displayDA(stdout,d);
    printf("\n");
    printf("array e: ");
    displayDA(stdout,e);
    printf("\n");
    return 0;
    }
