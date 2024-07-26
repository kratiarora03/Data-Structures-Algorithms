
public class MinimumNumberInArray {
    static final int INT_MAX = Integer.MAX_VALUE;

    int findMinArray(int arr[], int size) {
        int minAns = INT_MAX;
        for (int i = 0; i < size; i++) {
            if (arr[i] < minAns) {
                minAns = arr[i];
            }
        }
        return minAns;
    }

    public static void main(String[] args) {
        int arr[] = {20, 4, 15, 2, 8, 6, 11};
        int size = 7;

        MinimumNumberInArray minimumNumberInArray = new MinimumNumberInArray();
        int minimum = minimumNumberInArray.findMinArray(arr, size);
        System.out.println("Minimum: " + minimum);
    }
}
