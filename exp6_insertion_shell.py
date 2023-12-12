def get():
    n = int(input("Enter the number of students: "))
    pct = []
    print("Enter the percentage of each student:")
    for i in range(n):
        percentage = float(input(f"Student {i + 1}: "))
        pct.append(percentage)

    return pct

def insertion_sort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        while j >= 0 and key < arr[j]:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key

def shell_sort(arr):
    n = len(arr)
    gap = n // 2
    while gap > 0:
        for i in range(gap, n):
            temp = arr[i]
            j = i
            while j >= gap and arr[j - gap] > temp:
                arr[j] = arr[j - gap]
                j -= gap
            arr[j] = temp
        gap //= 2

if __name__ == "__main__":
    pct = get()

    while True:
        print("\nSelect a sorting method:")
        print("1. Insertion Sort")
        print("2. Shell Sort")
        print("3. Exit")

        choice = input("Enter your choice: ")

        if choice =='1':
            insertion_sort(pct)
            print("\nSorted Array:", pct)
            print("\nTop five scores:")
            for score in pct[-5:]:
                print(score)
        elif choice == '2':
            shell_sort(pct)
            print("\nSorted Array:", pct)
            print("\nTop five scores:")
            for score in pct[-5:]:
                print(score)
        elif choice == '3':
            print("Exiting the Sorting Menu.")
            break
        else:
            print("Invalid choice. Please select a valid option.")
