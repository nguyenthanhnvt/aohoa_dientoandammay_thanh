from ._anvil_designer import Form1Template
from anvil import *

class Form1(Form1Template):
    def __init__(self, **properties):
        # Set Form properties and Data Bindings.
        self.init_components(**properties)

        # Any code you write here will run before the form opens.

    def bubble_sort(self, arr):
        n = len(arr)
        for i in range(n-1):
            for j in range(0, n-i-1):
                if arr[j] > arr[j+1]:
                    arr[j], arr[j+1] = arr[j+1], arr[j]

    def update_sorted_array(self):
        input_string = self.text_box_1.text # Lấy dữ liệu từ text_box_1
        input_list = [int(x) for x in input_string.split()] # Chuyển đổi dữ liệu nhập vào thành list các số nguyên

        self.bubble_sort(input_list) # Sắp xếp mảng

        # Hiển thị kết quả đã sắp xếp vào text_box_2
        output_string = " ".join(map(str, input_list))
        self.text_box_2.text = output_string

    def text_box_1_pressed_enter(self, **event_args):
        """This method is called when the user presses Enter in this text box"""
        self.update_sorted_array()
