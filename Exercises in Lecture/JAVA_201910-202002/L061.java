import java.io.*;

class FracUtil {
    public static long gcd(long d, long n) {
        long g1 = Math.abs(d); // ※ Math.absは絶対値を求める（マイナスの値ならプラスにしたものを求める）メソッド
        long r1 = Math.abs(n);
        long tmp1;
        while ((tmp1 = r1 % g1) != 0) {
            r1 = g1;
            g1 = tmp1;
        }
        return g1;
    }
}

class Frac {
    private final long nume; // 分子
    private final long deno; // 分母
    
    public Frac(long nume, long deno) {
        this.nume = nume;
        this.deno = deno;
    }

    public long getNume() {
        return nume;
    }

    public long getDeno() {
        return deno;
    }
  }

class Main {
//     public static void main(String[] args) throws IOException {
//         BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    
//         // 2つの分数を入力する
//         System.out.println("分数の足し算をします");
//         System.out.println("1つ目の分数：");
//         Frac f1 = inputFrac(br);
//         System.out.println("2つ目の分数：");
//         Frac f2 = inputFrac(br);
    
//         // 2つ目の分数を約分する
//         f1 = reduceFrac(f1);
//         f2 = reduceFrac(f2);
    
//         // 分数の和を計算する
//         Frac sum = addFrac(f1, f2);
    
//         // 結果の分数を約分する
//         sum = reduceFrac(sum);
    
//         // 式と結果を出力する
//         System.out.println(f1.getNume() + "/" + f1.getDeno() + " + " + f2.getNume() + "/" + f2.getDeno()
//                 + " = " + sum.getNume() + " / " + sum.getDeno());
//     }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        // 合計を格納する変数sumを用意する
        Frac sum = new Frac(0, 1);

        System.out.println("分数の合計を計算します（分子が0の分数を入力すると終了）");
        int i = 0;
        while (true) {
            // 分数を入力する
            System.out.println((i + 1) + "つ目の分数：");
            Frac f = inputFrac(br);
            if (f.getNume() == 0) {
                break;
            }
            f = reduceFrac(f);

            // 入力した分数をsumに足す
            sum = addFrac(sum, f);
            sum = reduceFrac(sum);

            i++;
        }

        // 結果を出力する
        System.out.println("合計: " + sum.getNume() + "/" + sum.getDeno());
    }

    public static Frac inputFrac(BufferedReader br) throws IOException { // ※ 「throws IOException」については8時間目で説明
        System.out.println("分子を入力してください");
        long nume = Long.parseLong(br.readLine());
        System.out.println("分母を入力してください");
        long deno = Long.parseLong(br.readLine());
        if (deno <= 0) {
            System.out.println("エラー: 分母は1以上の整数です");
            System.exit(1); // 分母が0以下であればエラー // ※ System.exitはプログラムの実行を終了するメソッド
        }
        return new Frac(nume, deno);
    }

    /**
     * 引数としてたされた分数fracを約分した分数を返す
     */
    public static Frac reduceFrac(Frac f) {
         // 分数を約分する
        long g = Math.abs(f.getDeno()); // ※ Math.absは絶対値を求める（マイナスの値ならプラスにしたものを求める）メソッド
        long r = Math.abs(f.getNume());
        long tmp;
        while ((tmp = r % g) != 0) {
            r = g;
            g = tmp;
        }
        // 分母と分子の最大公約数で分母と分子を割る
        long nume = f.getNume() / g;
        long deno = f.getNume() / g;
        return new Frac (nume, deno);
    }

    /**
     * 引数としてたされた分数aとbの和を表す分数を返す
     */
    public static Frac addFrac(Frac a, Frac b) {
        long sumDeno = a.getDeno() * b.getDeno();
        long sumNume = a.getDeno() * b.getNume() + b.getDeno() * a.getNume();

        return new Frac (sumNume, sumDeno);
    }
}