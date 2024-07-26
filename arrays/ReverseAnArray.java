public class ReverseAnArray {
    void reverseArray(int arr[], int size) {
        int left = 0;
        int right = size - 1;
        while (left <= right) {
            // Swap elements at left and right indices
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }

    void printArray(int arr[], int size) {
        for (int i = 0; i < size; i++) {
            System.out.println(arr[i]);
        }
    }

    public static void main(String[] args) {
        int arr[] = {10, 20, 30, 40, 50, 60};
        int size = 6;

        ReverseAnArray reverseAnArray = new ReverseAnArray();
        reverseAnArray.reverseArray(arr, size);
        reverseAnArray.printArray(arr, size);
    }
}
