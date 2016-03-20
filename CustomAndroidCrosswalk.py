import os
import time
from datetime import datetime
from AppiumLibrary import AppiumLibrary
from selenium.webdriver.common.keys import Keys
from appium import webdriver
import unittest
from selenium.webdriver.common.action_chains import ActionChains
from selenium.webdriver.common.touch_actions import TouchActions


class CustomAndroidCrosswalk(AppiumLibrary):

########################################

    def open_hybrid_application(self, alias=None):

        desired_caps = {
            "automationName":"appium",
            "platformName":"Android",
            "deviceName":'',
            "appPackage":"com.skysoft.kkbox.android",
            "appActivity":"com.skysoft.kkbox.android.HomeActivity",
            #"androidDeviceSocket":"com.trendmicro.directpass.phone.jp_devtools_remote",
            "chromedriverExecutable": "/Users/bruce1/Desktop/auto/Patch_Chromedriver/out/Release/chromedriver",
            #"chromeOptions": {"androidDeviceSocket":"com.trendmicro.directpass.phone.jp_devtools_remote"}
            "unicodeKeyboard":"True",   
            "resetKeyboard":"True",
        }

        application = webdriver.Remote('http://localhost:4723/wd/hub', desired_caps)

        self._debug('Opened application with session id %s' % application.session_id)

        return self._cache.register(application, alias)

########################################

    def input_and_submit(self, id, text):

        driver = self._current_application()

        if text == '' or id == '':
            return False

        else:
            try:
                element = driver.find_element_by_id(id)
                element.clear()
                element.send_keys(text)
                driver.press_keycode(66)

            except:
                print('[input_and_submit] id error')


########################################

    def input_and_send(self, id, text):

        driver = self._current_application()

        if text == '' or id == '':
            return False

        else:
            try:
                element = driver.find_element_by_id(id)
                element.clear()
                send_key = element.send_keys(text)
                #return send_key

            except:
                print('[input_and_send] id error')

########################################

    def press_enter(self):

        driver = self._current_application()
        chain = ActionChains(driver)
        chain.send_keys(u'\ue007').perform()
        #http://selenium-python.readthedocs.org/en/latest/api.html

########################################

    def press_return(self):

        driver = self._current_application()
        chain = ActionChains(driver)
        chain.send_keys(u'\ue006').perform()

########################################

    def press_back(self):

        driver = self._current_application()
        chain = ActionChains(driver)
        chain.send_keys(u'\ue100').perform()

########################################

    def page_down(self):

        driver = self._current_application()
        chain = ActionChains(driver)
        chain.send_keys(u'\ue015').perform()
        chain.send_keys(u'\ue00f').perform()
        #\uE00E = up
        #\uE00F = down

########################################

    def page_flick(self, start_locator, end_locator):

        driver = self._current_application()
        el1 = self._element_find(start_locator, True, True)
        el2 = self._element_find(end_locator, True, True)
        action = TouchActions(driver)
        action.long_press(el1).move_to(el2).release().perform()

########################################

    def input_web_element(self, locator, text):

        element = self._element_find(locator, True, True)
        element.send_keys(text)

########################################

    def switch_to_webview(self, text):

        driver = self._current_application()
        driver.switch_to.context(text)

########################################

    def switch_to_currentwebview(self):

        driver = self._current_application()
        currentwebview = driver.contexts.last
        driver.switch_to.context(currentwebview)

########################################

    def restart_chromedriver(self):

        os.system("ps -ef | grep /Users/fenni/Desktop/Fenni/Automation/Patch_Chromedriver/out/Release/chromedriver | grep -v grep |grep -e '--port=9515\(\s.*\)\?$' | awk '{ print $2 }' | xargs kill -15")
        time.sleep(20)

########################################

    def switch_to_frame(self, text):

        driver = self._current_application()
        driver.switch_to.frame(text)

########################################

    def switch_to_native(self):

        driver = self._current_application()
        driver.switch_to.context('NATIVE_APP')

########################################

    def paste(self):

        #element = self._element_find(locator, True, True)
        #element.send_keys(text)
        #element.send_keys(Keys.CONTROL, 'v') #paste
        #driver = self._current_application()
        chain = ActionChains(driver)
        chain.send_keys(u'\ue03d', u'\ue009', 'v').perform()

########################################

    def print_status(self):

        driver = self._current_application()
        print(driver.current_activity)
        print(driver.context)
        print(driver.contexts)

########################################


    def wait_for_element_id(self, text):

        driver = self._current_application()

        wait_second = 0

        if text == '':
            return False

        while wait_second >= 0:

            try:
                if text != '':
                    element = driver.find_element_by_id(text)
                    is_find = 1
                    break

            except:
                element = None
                wait_second += 1
                time.sleep(1)

        print('Wait for element id finished!')

        if is_find == 1:
            return 1
        else:
            return 0


########################################


    def find_for_element_id(self, text):

        driver = self._current_application()

        wait_second = 0

        if text == '':
            return False

        while wait_second >= 0:

            try:
                if text != '':
                    element = driver.find_element_by_id(text)
                if element:
                    is_find = 1
                    break
                else:
                    is_find = 0
                    break

            except:
                element = None
                print('element = none!')
                is_find = 0
                break

        print('Find for element id finished!')

        if is_find == 1:
            return 1
        else:
            return 0


########################################


    def wait_for_element_id_disappear(self, text):

        driver = self._current_application()

        wait_second = 0

        if text == '':
            return False

        while wait_second >= 0:

            try:
                if text != '':
                    element = driver.find_element_by_id(text)
                    if element:
                        is_disappear = 0
                        wait_second += 1
                        time.sleep(1)
                    else:
                        is_disappear = 1
                        break

            except:
                element = None
                is_disappear = 1
                break

        print('Wait for element id disappeared!')

        if is_disappear == 1:
            return 1
        else:
            return 0

########################################


    def tap_element(self, xpath):

        driver = self._current_application()
        element = driver.find_element_by_xpath(xpath)
        driver.execute_script("arguments[0].click();", element)