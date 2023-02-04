from twilio.rest import Client
from twilio.base.exceptions import TwilioRestException

account = "MGb113d75b1ac4a57bedd4fe1da34ee3aa"
token = "ekh8yjGQ8UwVathPWu8YnTInmePoUvWnsVMDJzyU"
client = Client(account, token)

try:
 messaging_service_sid='MGb113d75b1ac4a57bedd4fe1da34ee3aa', 
                              body='Hello broo',      
                              to='+917565941348'
except TwilioRestException as e:
  print(e)