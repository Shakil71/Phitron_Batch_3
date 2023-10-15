class Star_Cinema:
    hall_list = []

    def entry_hall(self, hall_Object):
        self.hall_list.append(hall_Object)


class Hall(Star_Cinema):
    def __init__(self, rows, cols, hall_no):
        self.seats = {}
        self.show_list = []
        self.rows = rows
        self.cols = cols
        self.hall_no = hall_no
        super().__init__()

    def entry_show(self, id, movie_name, time):
        title = (id, movie_name, time)
        self.show_list.append(title)
        rows = self.rows
        cols = self.cols
        seat = [[False for col in range(cols)] for row in range(rows)]
        self.seats[id] = seat

    def book_seats(self, show_id, row_col):
        if show_id in self.show_list[0]:
            if not self.seats[show_id][row_col[0]][row_col[1]]:
                print("Available for booking")
                self.seats[show_id][row_col[0]][row_col[1]] = True
            else:
                print("Not available")
        else:
            print("Invalid")
            return

    def view_show_list(self):
        for show in self.show_list:
            print(
                f"show id = {show[0]}, Movie name = {show[1]}, time = {show[2]}")

    def view_available_seats(self, show_id):
        if show_id in self.seats:
            available_seats = sum(sum(not seat for seat in row)
                                  for row in self.seats[show_id])
            print(f"Available seats {show_id}: {available_seats}")
        else:
            print(f"Invalid")
            return


try:
    h = Hall(4, 3, 2)
    h.entry_show("01", "Surongo", "7PM")

    while True:
        print("1. Running Show")
        print("2. Available seats")
        print("3. Book tickets")
        print("4. Quit")
        a = int(input())
        if a == 1:
            h.view_show_list()
        elif a == 2:
            show_id = input("Enter ID: ")
            h.view_available_seats(show_id)
        elif a == 3:
            seats = int(input("How many seats are you want: "))
            for i in range(seats):
                show_id = input("Enter ID: ")
                row_col = tuple(
                    map(int, input("row and column: ").split(',')))
                h.book_seats(show_id, row_col)
        elif a == 4:
            break
except:
    print(" Please Check your Code Please! ")