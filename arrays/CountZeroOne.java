public class CountZeroOne {
    void countZeroOne(int arr[], int size) {
        int zeroCount = 0;
        int oneCount = 0;

        for (int i = 0; i < size; i++) {
            if (arr[i] == 0) {
                zeroCount++;
            }
            if (arr[i] == 1) {
                oneCount++;
            }
        }
        System.out.println("ZeroCount: " + zeroCount);
        System.out.println("OneCount: " + oneCount);
    }

    public static void main(String[] args) {
        int arr[] = {0, 1, 0, 0, 1, 1, 1, 0, 1, 0, 0, 1};
        int size = 12;
        CountZeroOne countZeroOne = new CountZeroOne();
        countZeroOne.countZeroOne(arr, size);
    }
}
