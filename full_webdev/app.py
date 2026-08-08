from flask import Flask , request , render_template, redirect ,session 
from flask_session import Session

app = Flask(__name__)

@app.route("/")
def index():
    if "name" in request.args:
        name = request.args["name"]
    else:
        name = "world"    
    return render_template("index.html",placeholder=name)