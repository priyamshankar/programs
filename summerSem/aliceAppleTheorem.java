public class aliceAppleTheorem {

	// n=grows only green apples
	// s=grows only red apples
	// e= some red apples
	// w= some green apples

	// m==guaranteed red apples
	// k==exactly red apples

	// algorithm......
	// if (M<=s*k)
	// print M
	// else if (M<s*k+e+w)
	// print s*k(M-s*k) * k
	// else
	// print -1
	// Java program for the above approach

	// Function to minimum no. of apples
	static int minApples(int M, int K, int N, int S, int W, int E) {

		// If we get all required apple
		// from South
		if (M <= S * K)
			return M;
		else if (M <= S * K + E + W)
			return S * K + (M - S * K) * K;
		else
			return -1;
	}

	// Driver code
	public static void main(String[] args) {
		// No. of red apple for gift
		int M = 10;
		

		// No. of red apple in each tree
		int K = 15;

		// No. of tree in North
		int N = 0;

		// No. of tree in South
		int S = 1;

		// No. of tree in West
		int W = 0;

		// No. of tree in East
		int E = 0;

		// Function Call
		int ans = minApples(M, K, N, S, W, E);
		System.out.println(ans);
	}

}
