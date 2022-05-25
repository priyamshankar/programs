import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.TreeSet;
public class critialPlanetProb {
  static List<List<Integer>> graph;
  static TreeSet<Integer> criticalPlanets;
  static boolean[] visited;
  static int[] inTime;
  static int[] low;
  static int timer = 0;
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int m = sc.nextInt();
    int n = sc.nextInt();
    graph = new ArrayList<>(n);
    for (int i = 0; i < n; i++)
      graph.add(new ArrayList<>());
    visited = new boolean[n];
    inTime = new int[n];
    low = new int[n];
    criticalPlanets = new TreeSet<>();
    for (int i = 0; i < m; i++) {
      int u = sc.nextInt();
      int v = sc.nextInt();
      graph.get(u).add(v);
      graph.get(v).add(u);
    }
    dfs(0, -1);
    for (int i : criticalPlanets)
      System.out.println(i);
  }
  public static void dfs(int node, int parent) {
    visited[node] = true;
    inTime[node] = low[node] = timer++;
    for (int neighbour : graph.get(node)) {
      if (neighbour == parent)
        continue;
      if (visited[neighbour])
        low[node] = Math.min(low[node], inTime[neighbour]);
      else {
        dfs(neighbour, node);
        if (low[neighbour] > inTime[node]) {
          criticalPlanets.add(neighbour);
          criticalPlanets.add(node);
        }
        low[node] = Math.min(low[node], low[neighbour]);
      }
    }
  }
}