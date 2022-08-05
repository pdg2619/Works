#include <stdio.h>    /* printf�֐��𗘗p���邽�߂ɃC���N���[�h����. */

#define NUM_MATRIX_ROW       2    /* �萔�}�N��NUM_MATRIX_ROW��6�Œ�`����. */
#define NUM_MATRIX_COLUMN    2    /* �萔�}�N��NUM_MATRIX_COLUMN��6�Œ�`����. */

int main(void)    /* main�֐����J�n����. */
{
    int i, j;    /* int�^�̕ϐ�i, j��錾����. */
    int a[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN] = { {0, 0}, {3, 0} };    /* int�^�̓񎟌��z��a[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN]��錾��, { {0, 0}, {3, 0} }�ŏ���������. */
    int b[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN] = { {1, 1}, {-1, -1} };    /* int�^�̓񎟌��z��b[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN]��錾��, { {1, 1}, {-1, -1} }�ŏ���������. */
    int c[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN] = { {0} };    /* int�^�̓񎟌��z��c[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN]��錾��, { {0} }�ŏ���������. */
    int d[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN] = { {0} };    /* int�^�̓񎟌��z��d[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN]��錾��, { {0} }�ŏ���������. */

    printf("Matrix A^2\n");    /* Matrix A^2�ƕ\������. */
    c[0][0] = a[0][0]*a[0][0] + a[0][1]*a[1][0];    /* a[0][0]*a[0][0] + a[0][1]*a[1][0]���v�Z��, c[0][0]�ɑ������. */
    c[0][1] = a[0][0]*a[0][1] + a[0][1]*a[1][1];    /* a[0][0]*a[0][1] + a[0][1]*a[1][1]���v�Z��, c[0][1]�ɑ������. */
    c[1][0] = a[1][0]*a[0][0] + a[1][1]*a[1][0];    /* a[1][0]*a[0][0] + a[1][1]*a[1][0]���v�Z��, c[1][0]�ɑ������. */
    c[1][1] = a[1][0]*a[0][1] + a[1][1]*a[1][1];    /* a[1][0]*a[0][1] + a[1][1]*a[1][1]���v�Z��, c[1][1]�ɑ������. */

    for ( i = 0; i < NUM_MATRIX_ROW; i++ ) {    /* ��������:i = 0, ��������:i < NUM_MATRIX_ROW, �X�V����:i++�Ƃ���for�������s����. */
        for ( j = 0; j < NUM_MATRIX_COLUMN; j++ ) {    /* ��������:j = 0, ��������:j < NUM_MATRIX_COLUMN, �X�V����:j++�Ƃ���for�������s����. */
            printf("%2d  ", c[i][j]);    /* c[i][j]�̒l�ƃX�y�[�X��\������. */
        }
        printf("\n");    /* �\���̉��s���s��. */
    }

    printf("\n");    /* �\���̉��s���s��. */

    printf("Matrix B^2\n");    /* Matrix B^2�ƕ\������. */
    d[0][0] = b[0][0]*b[0][0] + b[0][1]*b[1][0];    /* b[0][0]*b[0][0] + b[0][1]*b[1][0]���v�Z��, d[0][0]�ɑ������. */
    d[0][1] = b[0][0]*b[0][1] + b[0][1]*b[1][1];    /* b[0][0]*b[0][1] + b[0][1]*b[1][1]���v�Z��, d[0][1]�ɑ������. */
    d[1][0] = b[1][0]*b[0][0] + b[1][1]*b[1][0];    /* b[1][0]*b[0][0] + b[1][1]*b[1][0]���v�Z��, d[1][0]�ɑ������. */
    d[1][1] = b[1][0]*b[0][1] + b[1][1]*b[1][1];    /* b[1][0]*b[0][1] + b[1][1]*b[1][1]���v�Z��, d[1][1]�ɑ������. */

    for ( i = 0; i < NUM_MATRIX_ROW; i++ ) {    /* ��������:i = 0, ��������:i < NUM_MATRIX_ROW, �X�V����:i++�Ƃ���for�������s����. */
        for ( j = 0; j < NUM_MATRIX_COLUMN; j++ ) {    /* ��������:j = 0, ��������:j < NUM_MATRIX_COLUMN, �X�V����:j++�Ƃ���for�������s����. */
            printf("%2d  ", d[i][j]);    /* d[i][j]�̒l�ƃX�y�[�X��\������. */
        }
        printf("\n");    /* �\���̉��s���s��. */
    }

    return (0);    /* 0��߂���main�֐����I������. */
}
