from flask import Flask,render_template,jsonify
import serial
import time

app = Flask(__name__,static_url_path='/static')


app.config['SECRET_KEY']='%lkyg((t5*65UYf^jGF7$b7HJg4fk2Y22f'


@app.route("/")
def home():
    return(render_template('home.html'))







# @app.route('/api/arduino/<args>')
# def arduinoapi(args):

    
#     if not s.is_open:
#         s.open()
#     arg=args
#     print(arg)
#     s.write(bytes((f"{arg}\r\n").encode('utf-8')))
#     time.sleep(0.5)
#     datain=s.readline().decode('utf-8')
#     datainlist=datain.strip().split(',')
#     for i in datainlist:
#         print(i)
#     dataout={"led1":datainlist[0],
#              "led2":datainlist[1],
#              "led3":datainlist[2],
#              "led4":datainlist[3]}
    
#     s.close    
#     return (jsonify(dataout))

if __name__=="__main__":
    
    app.run(debug=True)