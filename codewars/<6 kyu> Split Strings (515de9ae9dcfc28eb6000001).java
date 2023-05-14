public class StringSplit {
  public static String[] solution(String s) {
    if (s.length() == 0) return new String[0];
    int size = (s.length() - 1) / 2 + 1;
    String[] out = new String[size];
    for (int i = 0; i < size; i++) {
      if (i * 2 + 2 <= s.length()) out[i] = s.substring(i * 2, i * 2 + 2);
      else out[i] = s.substring(i * 2) + "_";
    }
    return out;
  }
}
