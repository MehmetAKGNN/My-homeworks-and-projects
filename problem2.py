from tkinter import *

root = Tk()

class Example(Frame):

    def __init__(self, parent):
        Frame.__init__(self, parent)
        self.parent = parent
        self.initUI()
        self.parent.title("Goruntu Ekrani")

    def initUI(self):
        self.pack()
        self.canvas = Canvas(root, width=600 , height=400)
        self.item = self.canvas.create_polygon(2, 2, 2, 398, 110, 398, 110, 2, 2 ,2 ,outline="black" ,fill="red")
        self.item2 = self.canvas.create_polygon(122, 70, 122, 398, 232, 398, 232, 70, 122, 70, outline="black" ,fill="red")
        self.item3 = self.canvas.create_polygon(242, 125, 242, 398, 352, 398, 352, 125, 242, 125, outline="black" ,fill="red")
        self.item4 = self.canvas.create_polygon(362, 163, 362, 398, 472, 398, 472, 163, 362, 163, outline="black",fill="red")
        self.item5 = self.canvas.create_polygon(485, 2, 485, 398, 595, 398, 595, 2, 485, 2, outline="black",fill="red")
        self.canvas.pack(fill=BOTH, expand=True)
        self.canvas.tag_bind(self.item, '<ButtonPress 1>', self.renk1)
        self.canvas.tag_bind(self.item2, '<ButtonPress 1>', self.renk2)
        self.canvas.tag_bind(self.item3, '<ButtonPress 1>', self.renk3)
        self.canvas.tag_bind(self.item4, '<ButtonPress 1>', self.renk4)
        self.canvas.tag_bind(self.item5, '<ButtonPress 1>', self.renk5)
        self.cnvs_text = self.canvas.create_text(44, 395, anchor=SW, text="100", fill="red")
        self.cnvs_text1 = self.canvas.create_text(170, 395, anchor=SW, text="90", fill="red")
        self.cnvs_text2 = self.canvas.create_text(290, 395, anchor=SW, text="70", fill="red")
        self.cnvs_text3 = self.canvas.create_text(410, 395, anchor=SW, text="60", fill="red")
        self.cnvs_text4 = self.canvas.create_text(535, 395, anchor=SW, text="100", fill="red")
        self.canvas.bind('<Enter>', self.girdi)
        self.canvas.bind('<Leave>', self.çıktı)


    def girdi(self, event):
        self.canvas.itemconfig(self.cnvs_text, fill="white")
        self.canvas.itemconfig(self.cnvs_text1, fill="white")
        self.canvas.itemconfig(self.cnvs_text2, fill="white")
        self.canvas.itemconfig(self.cnvs_text3, fill="white")
        self.canvas.itemconfig(self.cnvs_text4, fill="white")

    def çıktı(self, event):
        self.canvas.itemconfig(self.cnvs_text, fill="red")
        self.canvas.itemconfig(self.cnvs_text1, fill="red")
        self.canvas.itemconfig(self.cnvs_text2, fill="red")
        self.canvas.itemconfig(self.cnvs_text3, fill="red")
        self.canvas.itemconfig(self.cnvs_text4, fill="red")

    def renk1(self, event):
        if self.canvas.itemcget(self.item, 'fill') == 'red':
            self.canvas.itemconfig(self.item, fill="blue")


        else:
            self.canvas.itemconfig(self.item, fill="red")

    def renk2(self, event):
        if self.canvas.itemcget(self.item2, 'fill') == 'red':
            self.canvas.itemconfig(self.item2, fill="blue")
        else:
            self.canvas.itemconfig(self.item2, fill="red")

    def renk3(self, event):
        if self.canvas.itemcget(self.item3, 'fill') == 'red':
            self.canvas.itemconfig(self.item3, fill="blue")
        else:
            self.canvas.itemconfig(self.item3, fill="red")

    def renk4(self, event):
        if self.canvas.itemcget(self.item4, 'fill') == 'red':
            self.canvas.itemconfig(self.item4, fill="blue")
        else:
            self.canvas.itemconfig(self.item4, fill="red")

    def renk5(self, event):
        if self.canvas.itemcget(self.item5, 'fill') == 'red':
            self.canvas.itemconfig(self.item5, fill="blue")
        else:
            self.canvas.itemconfig(self.item5, fill="red")

def main():
    app = Example(root)
    root.geometry("600x400")
    root.mainloop()


main()