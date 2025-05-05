function more(){
    if (document.getElementById("extra").style.display != "flex") {
        document.getElementById("extra").style.display = "flex"
        document.getElementById("shw").innerHTML = "Show Less"
    } else {
        document.getElementById("extra").style.display = "none"
        document.getElementById("shw").innerHTML = "Show More"
    } 
}
function change(){
    document.getElementById("img").style.height = "240px"
    document.getElementById("img").style.width = "400px"
}
function unchange(){
    document.getElementById("img").style.height = "171px"
    document.getElementById("img").style.width = "285px"
}