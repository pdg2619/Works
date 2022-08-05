#include <stdio.h>    /* printf�֐��𗘗p���邽�߂ɃC���N���[�h����. */

#define NUM_MATRIX_ROW       6    /* �萔�}�N��NUM_MATRIX_ROW��6�Œ�`����. */
#define NUM_MATRIX_COLUMN    6    /* �萔�}�N��NUM_MATRIX_COLUMN��6�Œ�`����. */

int main(void)    /* main�֐����J�n����. */
{
    /* int�^�̕ϐ�i, j, �y��int�^�̓񎟌��z��a[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN]��錾����. */
    int i, j, mat_i[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN], mat_z[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN];

    for ( i = 0; i < NUM_MATRIX_ROW; i++ ) {    /* ��������:i = 0, ��������:i < NUM_MATRIX_ROW, �X�V����:i++�Ƃ���for�������s����. */
        for ( j = 0; j < NUM_MATRIX_COLUMN; j++ ) {    /* ��������:j = 0, ��������:j < NUM_MATRIX_COLUMN, �X�V����:j++�Ƃ���for�������s����. */
            mat_z[i][j] = 0;    /* mat_z[i][j]��0��������. */
            mat_i[i][j] = 0;    /* mat_i[i][j]��0��������. */
        }
        mat_i[i][i] = 1;    /* mat_i[i][i]��1��������. */
    }

    printf("Identity Matrix E\n");    /* Identity Matrix E�ƕ\������. */
    for ( i = 0; i < NUM_MATRIX_ROW; i++ ) {    /* ��������:i = 0, ��������:i < NUM_MATRIX_ROW, �X�V����:i++�Ƃ���for�������s����. */
        for ( j = 0; j < NUM_MATRIX_COLUMN; j++ ) {    /* ��������:j = 0, ��������:j < NUM_MATRIX_COLUMN, �X�V����:j++�Ƃ���for�������s����. */
            printf("%2d  ", mat_i[i][j]);    /* mat_i[i][j]�̒l��\������. */
        }
        printf("\n");    /* �\���̉��s���s��. */
    }

    printf("\n");    /* �\���̉��s���s��. */

    printf("Zero Matrix O\n");    /* Zero Matrix O�ƕ\������. */
    for ( i = 0; i < NUM_MATRIX_ROW; i++ ) {    /* ��������:i = 0, ��������:i < NUM_MATRIX_ROW, �X�V����:i++�Ƃ���for�������s����. */
        for ( j = 0; j < NUM_MATRIX_COLUMN; j++ ) {    /* ��������:j = 0, ��������:j < NUM_MATRIX_COLUMN, �X�V����:j++�Ƃ���for�������s����. */
            printf("%2d  ", mat_z[i][j]);    /* mat_z[i][j]�̒l��\������. */
        }
        printf("\n");    /* �\���̉��s���s��. */
    }

    return (0);    /* 0��߂���main�֐����I������. */
}
