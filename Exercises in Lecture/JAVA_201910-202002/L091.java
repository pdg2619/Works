import java.util.Comparator;
import java.util.Random;
import java.util.Arrays;

enum Suit {
    SPADE("♤"),
    HEART("♥"),
    DIAMOND("◆"),
    CLUB("♧"),

    ;

    public final String str;

    private Suit(String str) {
        this.str = str;
    }
}

enum Rank {
    ACE("A"),
    TWO("2"),
    THREE("3"),
    FOUR("4"),
    FIVE("5"),
    SIX("6"),
    SEVEN("7"),
    EIGHT("8"),
    NINE("9"),
    TEN("10"),
    JACK("J"),
    QUEEN("Q"),
    KING("K"),

    ;

    public final String str;

    private Rank(String str) {
        this.str = str;
    }
}

class Card {
    public final Suit suit;
    public final Rank rank;

    public Card(Suit suit, Rank rank) {
        this.suit = suit;
        this.rank = rank;
    }

    public String toString() {
        return "[ " + this.suit.str + this.rank.str + " ]";
    }
}

// スート順、ランク順に揃えるためのcomparator
class CardComparator implements Comparator<Card> {
    public int compare(Card c1, Card c2) {
         if (c1.rank != c2.rank) { // スートが同じでランクが違うなら
            return c1.rank.ordinal() - c2.rank.ordinal(); // ランクの順序がカードの順序
        }
        
         if (c1.suit != c2.suit) { // スートが違うなら
            return c1.suit.ordinal() - c2.suit.ordinal(); // スートの順序がカードの順序
        }
  
        return 0; // スートもランクも同じなら
    }
}

class Main {
    public static void main(String[] args) {
        // トランプのカードを一組生成する
        Suit[] suitValues = Suit.values();
        Rank[] rankValues = Rank.values();
        Card[] cards = new Card[suitValues.length * rankValues.length];
        for (int si = 0; si < suitValues.length; si++) {
            for (int ri = 0; ri < rankValues.length; ri++) {
                cards[si * rankValues.length + ri] = new Card(suitValues[si], rankValues[ri]);
            }
        }

        shuffleCards(cards);
        // printCards(cards);

        Arrays.sort(cards, new CardComparator());
        printCards(cards);
    }

    public static void printCards(Card[] cards) {
        for (int i = 0; i < cards.length; i++) {
            System.out.print(cards[i] + " ");
        }
        System.out.println();
    }

    public static void shuffleCards(Card[] cards) {
        Random rand = new Random();
        for (int i = 0; i < cards.length; i++) {
            int r = rand.nextInt(cards.length); // ※ 0〜(カード枚数-1)の数字をランダムに作成する
            Card t = cards[r];
            cards[r] = cards[i];
            cards[i] = t;
        }
    }
}