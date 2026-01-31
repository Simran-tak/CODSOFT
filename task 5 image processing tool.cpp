#include <iostream>
using namespace std;

int main() {
    int choice;
    int imageLoaded = 0;
    int width = 0, height = 0;
    int brightness = 0, contrast = 0;

    while (1) {
        cout << "\n--- IMAGE PROCESSING TOOL ---\n";
        cout << "1. Load Image\n";
        cout << "2. Display Image\n";
        cout << "3. Apply Filter\n";
        cout << "4. Adjust Brightness & Contrast\n";
        cout << "5. Crop Image\n";
        cout << "6. Resize Image\n";
        cout << "7. Save Image\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Image loaded successfully\n";
            imageLoaded = 1;
            width = 640;
            height = 480;
        }
        else if (choice == 2) {
            if (imageLoaded == 0) {
                cout << "Please load image first\n";
            } else {
                cout << "Displaying image (" << width << " x " << height << ")\n";
            }
        }
        else if (choice == 3) {
            if (imageLoaded == 0) {
                cout << "Load image first\n";
            } else {
                cout << "1. Grayscale\n";
                cout << "2. Blur\n";
                cout << "3. Sharpen\n";
                cout << "Choose filter: ";
                int f;
                cin >> f;
                cout << "Filter applied\n";
            }
        }
        else if (choice == 4) {
            if (imageLoaded == 0) {
                cout << "Load image first\n";
            } else {
                cout << "Enter brightness value: ";
                cin >> brightness;
                cout << "Enter contrast value: ";
                cin >> contrast;
                cout << "Brightness and contrast adjusted\n";
            }
        }
        else if (choice == 5) {
            if (imageLoaded == 0) {
                cout << "Load image first\n";
            } else {
                width = width / 2;
                height = height / 2;
                cout << "Image cropped\n";
            }
        }
        else if (choice == 6) {
            if (imageLoaded == 0) {
                cout << "Load image first\n";
            } else {
                cout << "Enter new width: ";
                cin >> width;
                cout << "Enter new height: ";
                cin >> height;
                cout << "Image resized\n";
            }
        }
        else if (choice == 7) {
            if (imageLoaded == 0) {
                cout << "No image to save\n";
            } else {
                cout << "Image saved successfully\n";
            }
        }
        else if (choice == 8) {
            cout << "Exiting program\n";
            break;
        }
        else {
            cout << "Invalid choice\n";
        }
    }

    return 0;
}
