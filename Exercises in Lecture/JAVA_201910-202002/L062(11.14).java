class Frac {
    private final long nume; // 分子
    private final long deno; // 分母

    public Frac(long nume, long deno) {
        if (deno <= 0) {
            System.exit(1); // 分母が0以下であればエラー // ※ System.exitはプログラムの実行を終了するメソッド
        }
        this.nume = nume;
        this.deno = deno;
    }

    public long getNume() {
        return this.nume;
    }

    public long getDeno() {
        return this.deno;
    }

    public boolean equals(Object obj) {
        if (this == obj) { // ※ 引数がthisと同じオブジェクトを参照している
            return true;
        }
        if (obj == null) {
            return false;
        }
       if (this.getClass() != obj.getClass()) { // ※ 引数のオブジェクトとthisのオブジェクトが違うクラスのインスタンス
            return false;
        }
    
        Frac other = (Frac)obj;
        return this.getNume() == other.getNume() && this.getDeno() == other.getDeno();
        // otherの中身とthisの中身を比較する・・・
    }
}

class Main {
    public static void main(String[] args) {
        // 分数を用意する
        Frac a = new Frac(3, 4);
        Frac b = new Frac(3, 4);
        // Frac c = new Frac(5, 4);

        // 分数を出力する
        System.out.println("a = " + a.getDeno() + "/" + a.getNume());
        System.out.println("b = " + b.getDeno() + "/" + b.getNume());
        // System.out.println("c = " + c.getDeno() + "/" + c.getNume());

        if (a.equals(a)) {
            System.out.println("a equals to a.");
        }
        else {
            System.out.println("a does NOT equal to a.");
        }
        if (a.equals(b)) {
            System.out.println("a equals to b.");
        }
        else {
            System.out.println("a does NOT equal to b.");
        }
        // if (a.equals(c)) {
        //     System.out.println("a equals to c.");
        // }
        // else {
        //     System.out.println("a does NOT equal to c.");
        // }
    }
}