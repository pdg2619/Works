import java.io.*;
import java.util.*;

// www.jdoodle.comを利用するときの注意:
// Mainクラスは「public」を付けて定義してください

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        List<String> lines = new ArrayList<String>(); // 行のリスト

        // 1. 行を読み込んでリストを作る
        String line;
        while ((line = br.readLine()) != null) {
            lines.add(line);
        }

        // 2. リストを、各行が整数だとみなしてソートする
        Collections.sort(lines, (l1, l2) -> {
            int j1 = Integer.parseInt(l1);
            int j2 = Integer.parseInt(l2);
            int k = j1-j2;
                return k;
            });

        // 3. リストの行を出力する
        for (String l : lines)
        System.out.println(l);
    }
}