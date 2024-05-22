class HiddenBox:
     def __init__(self,BoxName,Creator,DateHidden,GameLocation,):
         self.__BoxName = BoxName
         self.__Creator = Creator
         self.__DateHidden = DateHidden
         self.__GameLocation = GameLocation
         self.__LastFinds = [[" " for i in range(0,2)]for j in range(0,10)]
         self.__Active = False
         
    def GetBoxName(self):
        return self.__BoxName
    
    def GetLocation(self):
        return self.__GameLocation
    
    TheBoxes = [HiddenBox("","","","") for i in range (0,10000)]

    def NewBox(self):
        Boxname = input("input the name of the box")
        Boxcreator = input("input the creator")
        Boxdatehidden = input("input the date")
        Boxgamelocation = input("input the game location")
        TheBoxes.append(Boxname, Boxcreator, Boxdatehidden,Boxgamelocation)

    NewBox()

class PuzzleText(HiddenBox):
    def __init__(self,BoxName,Creator,DateHidden,Location,PuzzleText,Solution):
        HiddenBox.__init__(self,BoxName,Creator,DateHidden,Location)
        self.__PuzzleText = PuzzleText
        self.__Solution = Solution
        
    