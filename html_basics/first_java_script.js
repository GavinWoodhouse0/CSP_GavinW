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
    document.getElementById("img").style.height = "150px"
    document.getElementById("img").src = "https://cdn.britannica.com/75/174375-050-BC6968AE/Hazelnuts-fruit-compound-ovary-seed.jpg"
}