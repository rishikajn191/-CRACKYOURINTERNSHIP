//Using Quick Sort
class Solution {
public:
    int partition(vector<int>& arr, int low, int high){
        int pivot = arr[high];    // pivot
        int i = (low - 1);  // Index of smaller element
        for (int j = low; j <= high - 1; j++){
        // If current element is smaller than or
        // equal to pivot
            if (arr[j] <= pivot)
            {
                i++;    // increment index of smaller element
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);
        return (i + 1);
    }
    void quickSort(vector<int>& arr, int low, int high){
        if (low < high){
            int pi = partition(arr, low, high);
            // Separately sort elements before
            // partition and after partition
            quickSort(arr, low, pi - 1);
            quickSort(arr, pi + 1, high);
        }
    }

    void sortColors(vector<int>& nums) {
        quickSort(nums,0,nums.size()-1);
    }
};
