import pygame

class Ship():

    def __init__(self,screen):
        """初始化图像并设置初始位置"""
        self.screen = screen

        #加载图像并获得其外接矩形
        self.image = pygame.image.load('images/ship.bmp')
        self.rect = self.image.pygame.event.get_rect()
        self.screen_rect = screen.get_rect()

        #将每个图像放在屏幕底部中央
        self.rect.centerx = self.screen_rect.centerx
        self.rect.bottom = self.screen_rect.bottom
    
    def blitme(self):
        """在指定位置绘制图像"""
        self.screen.blit(self.image,self.rect)