#include <stdio.h>    /* printf�֐��𗘗p���邽�߂ɃC���N���[�h����. */

int main(void)    /* main�֐����J�n����. */
{
    int i = 1;    /* int�^�̕ϐ�i��錾��, 1�ŏ���������. */
    int sum = 0;    /* int�^�̕ϐ�sum��錾��, 0�ŏ���������. */

    do {    /* do-while�������s����. */
        sum = sum + i;    /* sum + i���v�Z��, �v�Z���ʂ�sum�ɑ������. */
        i = i + 1;    /* i + 1���v�Z��, �v�Z���ʂ�i�ɑ������. */
    } while ( i <= 10 );    /* i��10�ȉ��ł��邩�ۂ��𔻒肵, i��10�ȉ��ł����do-while�����p������. */

    printf("%d\n", sum);    /* sum��\������. */

    return (0);    /* 0��߂���main�֐����I������. */
}
