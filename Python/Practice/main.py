class Shop:
    shop_name = 'Jamuna Future Park'
    def __init__(self,owner):
        self.owner = owner
        self.cart = []
    def add_to_item(self,item):
        self.cart.append(item)

buyer = Shop('Jahid')
buyer.add_to_item('Shoe')
print(buyer.cart)




