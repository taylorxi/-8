import java.util.Arrays;

public class zuoye1 {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] a = { 1, 9, 5, 6, 7, 2, 4 };
		zuoye1 tt = new zuoye1();
		int x = tt.fun(a, 0, a.length - 1, 1);
		System.out.println(x);
		System.out.println(Arrays.toString(a));
	}

	public int fun(int[] a, int s, int l, int r) {
		Arrays.sort(a);
		while (s <= l) {
			int mid = (s + l) / 2;
			int midValue = a[mid];
			if (r < midValue) {
				l = mid - 1;
			} else if (midValue == r) {
				return mid;
			} else {
				s = mid + 1;
			}
		}
		return -1;
	}
}
