#include <stdio.h>    /* printf�֐��𗘗p���邽�߂ɃC���N���[�h����. */

int main(void)    /* main�֐����J�n����. */
{
    int i;    /* int�^�̕ϐ�i��錾����. */
    int sum = 0;    /* int�^�̕ϐ�sum��錾��, 0�ŏ���������. */

    for ( i = 1; i <= 10; i++ ) {    /* ��������:i = 1, ��������:i <= 10, �X�V����:i++�Ƃ���for�������s����. */
        sum += i;    /* sum + i���v�Z��, �v�Z���ʂ�sum�ɑ������. */
    }

    printf("%d\n", sum);    /* sum��\������. */

    return (0);    /* 0��߂���main�֐����I������. */
}
