class Main {
     public static void main(String[] args) {
       int[][] array = new int[9][9]; // ２次元配列
        int row, column, value;
        for (row = 0; row < 9; row++)
            for (column = 0; column < 9; column++)
                array[row][column] = (row + 1) * (column + 1); // 計算
        
        //出力
        for (row = 0; row < 9; row++) {
            for (column = 0; column < 9; column++) {
                value = array[row][column];
                if (value < 10)
                    System.out.print("  " + value);
                else
                    System.out.print(" " + value);
            }
            System.out.println();
        }
     }
}