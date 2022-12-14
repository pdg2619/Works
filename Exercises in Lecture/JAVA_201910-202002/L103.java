import java.io.*;
import java.util.*;

// www.jdoodle.comを利用するときの注意:
// Mainクラスは「public」を付けて定義してください

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        // 1. CSVファイルを読み込んで、表（縦横に値が並んだもの）を作る
        List<List<String>> table = new ArrayList<List<String>>(); // ※ table.get(y).get(x)が、y行目のx個目の値になるように
        String line;
        while ((line = br.readLine()) != null) {
            String[] fields = line.split(",");
            // ※１
            List<String> values = new ArrayList<String>();
            for(int i = 0; i < fields.length; i++){
                values.add(fields[i]);
            }
            table.add(values);
        }

        // // デバッグ用: 読み込んだ表を出力する
        // for (int y = 0; y < table.size(); y++) {
        //     System.out.println(table.get(y));
        // }

        // 2. 表の縦横をひっくり返したものを出力する
        int height = table.size();
        // int width = table.get(0).size();
        int maxWidth = 0;
        for (int z = 0; z < table.size(); z++) {
            if (maxWidth < table.get(z).size()){
                maxWidth = table.get(z).size();
            }
        }
            
            for (int x = 0; x < maxWidth; x++) {
            for (int y = 0; y < height; y++) {
                if (y >= 1) {
                    System.out.print(",");
                }
                if (x < table.get(y).size()){
                System.out.print(table.get(y).get(x));
                    }
                }
            System.out.println();
        }
    }
}