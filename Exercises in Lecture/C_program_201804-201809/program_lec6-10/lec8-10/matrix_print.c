#include <stdio.h>    /* printf�֐��𗘗p���邽�߂ɃC���N���[�h����. */

#define NUM_MATRIX_ROW       4    /* �萔�}�N��NUM_MATRIX_ROW��4�Œ�`����. */
#define NUM_MATRIX_COLUMN    3    /* �萔�}�N��NUM_MATRIX_COLUMN��3�Œ�`����. */

int main(void)    /* main�֐����J�n����. */
{
    /* int�^�̕ϐ�i, j��錾����. */
    /* �܂�, int�^�̓񎟌��z��a[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN]��錾��, { {1, 5, 9}, {2, 6, 10}, {3, 7, 11}, {4, 8, 12} }�ŏ���������. */
    int i, j, a[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN] = { {1, 5, 9}, {2, 6, 10}, {3, 7, 11}, {4, 8, 12} };

    printf("Matrix A\n");    /* Matrix A�ƕ\������. */
    for ( i = 0; i < NUM_MATRIX_ROW; i++ ) {    /* ��������:i = 0, ��������:i < NUM_MATRIX_ROW, �X�V����:i++�Ƃ���for�������s����. */
        for ( j = 0; j < NUM_MATRIX_COLUMN; j++ ) {    /* ��������:j = 0, ��������:j < NUM_MATRIX_COLUMN, �X�V����:j++�Ƃ���for�������s����. */
            printf("%2d  ", a[i][j]);    /* �񎟌��z��̗v�fa[i][j]�̒l��\������. */
        }
        printf("\n");    /* �\���̉��s���s��. */
    }

    return (0);    /* 0��߂���main�֐����I������. */
}
