public class ExtremePrint {
    void extremePrint(int arr[], int size) {
        int left = 0;
        int right = size - 1;
        while (left < right) {
            if (left == right) {
                System.out.println(arr[left]);
            } else {
                System.out.println(arr[left]);
                System.out.println(arr[right]);
            }
            left++;
            right--;
        }
    }

    public static void main(String[] args) {
        int arr[] = {10, 20, 30, 40, 50, 60};
        int size = 6;

        ExtremePrint extremePrintObject = new ExtremePrint();
        extremePrintObject.extremePrint(arr, size);
    }
}
