int partition(int* nums, int start, int end) {
    int pivot = nums[start];
    int s = start, e = end;
    while (s < e) {
        while (s <= end && nums[s] <= pivot) {
            s++;
        }
        while (nums[e] > pivot) {
            e--;
        }
        if (s < e) {
            int temp = nums[s];
            nums[s] = nums[e];
            nums[e] = temp;
        }
    }
    nums[start] = nums[e];
    nums[e] = pivot;
    return e;
}
void quicksort(int* nums, int start, int end) {
    if (start < end) {
        int p = partition(nums, start, end);
        quicksort(nums, start, p - 1);
        quicksort(nums, p + 1, end);
    }
}
void sortColors(int* nums, int numsSize) { quicksort(nums, 0, numsSize - 1); }
