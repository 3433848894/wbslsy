import pygame

class Ship():

    def_init_(self,screen):
    """初始化飞船并设置初始位置"""
    self.screen = screen

    #加载飞船图像并获得其外接矩形
    self.image = pygame.image.load('images/ship.bmp')
    self.rect = self.image.pygame.event.get_rect()
    self.screen_rect = screen.get_rect()
    