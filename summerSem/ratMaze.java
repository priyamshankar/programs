public class ratMaze {
    /*
     * create a solution matrix initialliy filled with 0's
     * create a recursive function which takes initial matrix output matrix and
     * position rat[i,j]
     * if the position is out of the matrix or the position is not valid then return
     * markt he position output [i][j] as 1 and check if the current position is
     * estination or not if destinaiton is reached print the output materix and
     * return .
     * recursively call for porition [i+1,j] and [i,j+1]
     * unmark position [i,j], ie output [i][j]=0
     */

    final int N = 4;

    void printSolution(int sol[][]) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++)
                System.out.print(" " + sol[i][j] + " ");
            System.out.println();
        }
    }

    boolean isSafe(int maze[][], int x, int y) {
        return (x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1);
    }

    boolean solveMaze(int maze[][]) {
        int sol[][] = { { 0, 0, 0, 0 },
                { 0, 0, 0, 0 },
                { 0, 0, 0, 0 },
                { 0, 0, 0, 0 } };

        if (solveMazeUtil(maze, 0, 0, sol) == false) {
            System.out.print("Solution doesn't exist");
            return false;
        }

        printSolution(sol);
        return true;
    }

    boolean solveMazeUtil(int maze[][], int x, int y,
            int sol[][]) {
        if (x == N - 1 && y == N - 1) {
            sol[x][y] = 1;
            return true;
        }

        if (isSafe(maze, x, y) == true) {
            sol[x][y] = 1;

            if (solveMazeUtil(maze, x + 1, y, sol))
                return true;

            if (solveMazeUtil(maze, x, y + 1, sol))
                return true;

            sol[x][y] = 0;
            return false;
        }
        return false;
    }

    public static void main(String args[]) {
        ratMaze rat = new ratMaze();
        int maze[][] = { { 1, 0, 0, 0 },
                { 1, 1, 0, 1 },
                { 0, 1, 0, 0 },
                { 1, 1, 1, 1 } };
        rat.solveMaze(maze);
    }
}