import java.util.Arrays;

public class Dinglemouse {
  public static String[] trafficLights(String road, int n) {
    char[] currRoad = road.toCharArray();
    int[] lightTimer = new int[road.length()];
    Arrays.fill(lightTimer, -1);
    
    //10-6 G
    //5 O
    //4-0 R
    for (int i = 0; i < currRoad.length; i++) {
      if (currRoad[i] == 'R') lightTimer[i] = 4;
      else if (currRoad[i] == 'G') lightTimer[i] = 10;
   }
    
    String[] roads = new String[n + 1];
    roads[0] = road;
    
    for (int i = 1; i <= n; i++) {
      for (int j = 0; j < lightTimer.length; j++) {
        if (lightTimer[j] == 0) {
          lightTimer[j] = 10;
          if (currRoad[j] != 'C') currRoad[j] = 'G';
        }
        else if (lightTimer[j] != -1) {
          lightTimer[j]--;
          if (lightTimer[j] == 5) {
            if (currRoad[j] != 'C') currRoad[j] = 'O';
          }
          else if (lightTimer[j] <= 4) {
            if (currRoad[j] != 'C') currRoad[j] = 'R';
          }
          else if (lightTimer[j] >= 6) {
            if (currRoad[j] != 'C') currRoad[j] = 'G';
          }
        }
      }
      for (int j = lightTimer.length - 1; j >= 0; j--) {
        if (currRoad[j] == 'C') {
          if (j == lightTimer.length - 1 && lightTimer[j] == -1) {
            currRoad[j] = '.';
          }
          else if (j == lightTimer.length - 1 && lightTimer[j] != -1) {
            if (lightTimer[j] == 5) currRoad[j] = 'O';
            else if (lightTimer[j] <= 4) currRoad[j] = 'R';
            else if (lightTimer[j] >= 6) currRoad[j] = 'G';
          }
          else if (currRoad[j + 1] == '.' && lightTimer[j] == -1) {
            currRoad[j] = '.';
            currRoad[j + 1] = 'C';
          }
          else if (currRoad[j + 1] == '.' && lightTimer[j] != -1) {
            if (lightTimer[j] == 5) currRoad[j] = 'O';
            else if (lightTimer[j] <= 4) currRoad[j] = 'R';
            else if (lightTimer[j] >= 6) currRoad[j] = 'G';
            currRoad[j + 1] = 'C';
          }
          else if (currRoad[j + 1] == 'G' && j + 1 == lightTimer.length - 1) {
            currRoad[j] = '.';
            currRoad[j + 1] = 'C';
          }
          else if (currRoad[j + 1] == 'G' && currRoad[j + 2] == '.') {
            currRoad[j] = '.';
            currRoad[j + 1] = 'C';
          }
        }
      }
      roads[i] = String.valueOf(currRoad);
    }
    
    return roads;
  }
}
