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
    public String format(){
        if (this.deno == 1) {
          // return String.valueOf(this.nume);
          return this.nume + "";
        }
        else {
        return this.nume + "/" + this.deno;
        }
    }
  }

class Main {
    public static void main(String[] args) {
        // 分数を入力する
        Frac a = new Frac(3, 4);
        Frac b = new Frac(2, 1);

        // 分数を出力する
        System.out.println("a = " + a.format());
        System.out.println("b = " + b.format());
    }
}