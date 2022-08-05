#include <stdio.h>    /* printf�֐��𗘗p���邽�߂ɃC���N���[�h����. */

#define NUM_STEPS    15    /* �萔�}�N��NUM_STEPS��15�Œ�`����. �\���������p�X�J���̎O�p�`�̍s����\��. */

void Pascal_triangle(int a[][NUM_STEPS])    /* int�^�̓񎟌��z��a[][NUM_STEPS]�̊e�v�fa[n][r]�ɓ񍀌W��nCr������, �l��߂��Ȃ��֐�. */
{
    int i, j;    /* int�^�̕ϐ�i, j��錾����. */

    for ( i = 0; i < NUM_STEPS; i++ ) {    /* ��������:i = 0, ��������:i < NUM_STEPS, �X�V����:i++�Ƃ���for�������s����. */
        for ( j = 0; j < NUM_STEPS; j++ ) {    /* ��������:j = 0, ��������:j < NUM_STEPS, �X�V����:j++�Ƃ���for�������s����. */

            if ( j == 0 ) {    /* j = 0�𖞂����ꍇ�ɂ͈ȉ��̒����ʂň͂܂ꂽ�����̏������s��. */
                a[i][j] = 1;    /* a[i][j]��1��������. */
            }

            else if ( j == i ) {    /* j �� 0����j = i�𖞂����ꍇ�ɂ͈ȉ��̒����ʂň͂܂ꂽ�����̏������s��. */
                a[i][j] = 1;    /* a[i][j]��1��������. */
                break;
            }

            else {    /* j �� 0����j �� i�𖞂����ꍇ�ɂ͈ȉ��̒����ʂň͂܂ꂽ�����̏������s��. */
                a[i][j] = a[i-1][j-1] + a[i-1][j];    /* a[i][j]��a[i-1][j-1] + a[i-1][j]��������. */
            }

        }
    }
}

int main(void)    /* main�֐����J�n����. */
{
    int x[NUM_STEPS][NUM_STEPS];    /* int�^�̓񎟌��z��x[NUM_STEPS][NUM_STEPS]��錾����. */
    int i, j;    /* int�^�̕ϐ�i, j��錾����. */

    Pascal_triangle(x);    /* x�������Ƃ��ēn��,�֐�Pascal_triangle���Ăяo��. */

    for ( i = 0; i < NUM_STEPS; i++ ) {    /* ��������:i = 0, ��������:i < NUM_STEPS, �X�V����:i++�Ƃ���for�������s����. */
        for ( j = 0; j <= i; j++ ) {    /* ��������:j = 0, ��������:j <= i, �X�V����:j++�Ƃ���for�������s����. */
            printf("%4d ", x[i][j]);    /* x[i][j]�̒l��\������. */
        }
        printf("\n");    /* �\���̉��s���s��. */
    }

    return (0);    /* 0��߂���main�֐����I������. */
}
