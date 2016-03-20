import unittest
import time
from datetime import datetime
from AppiumLibrary import AppiumLibrary
from appium.webdriver.common.touch_action import TouchAction
from AppiumLibrary import utils

class Custom_ios(AppiumLibrary):

########################################

    def dismiss_alert(self):

        driver = self._current_application()
        alert = driver.switch_to_alert()
        if not alert:
            return'No Alert'
        else:
            alert.dismiss()

########################################

    def print_status(self):

        driver = self._current_application()
        print(driver.context)
        print(driver.contexts)

########################################

    def switch_to_webview(self, text):

        driver = self._current_application()
        driver.switch_to.context(text)

########################################

    def switch_to_currentwebview(self):

        driver = self._current_application()
        currentwebview = driver.current_context
        driver.switch_to.context(currentwebview)

########################################

    def switch_to_native(self):

        driver = self._current_application()
        driver.switch_to.context('NATIVE_APP')

########################################


    def tap_element(self, xpath):

        driver = self._current_application()
        element = driver.find_element_by_xpath(xpath)
        #action = TouchAction(driver)
        #action.tap(element).perform()
        #driver.find_element_by_xpath(xpath).tap()
        #WebElement = driver.find_element_by_xpath(xpath)
        #driver.tap(1, WebElement)
        driver.execute_script("arguments[0].click();", element)
        #driver.execute_script("mobile: tap",{"touchCount":"1","element":element})

########################################

    def find_by_class_name(self, browser, criteria, tag, constraints):

        return self.filter_elements(
            browser.find_elements_by_class_name(criteria),
            tag, constraints)

########################################

    def click_web_element(self, locator):

        #driver = self._current_application()
        self._info("Clicking element '%s'." % locator)
        self._element_find(locator, True, True).click()


########################################

    def switch_to_frame(self, text):

        driver = self._current_application()
        #print(driver.page_source)
        driver.switch_to.frame(text)