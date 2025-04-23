let images = ["https://nuts.com/images/ct/images.cdn.us-central1.gcp.commercetools.com/fe6ef66f-361c-4adb-b11f-d4aa8f13c79c/3012_RawHazelnutsFil-m2rR2kDt-large.jpg", "https://cdn-prod.medicalnewstoday.com/content/images/articles/323/323807/shelled-hazelnuts-in-small-white-bowl.jpg"]
function hello(){
    let name = window.prompt("What is your name?", "World")
    document.getElementById("title").innerHTML = "Hello " + name + "!"
}
count = 0
function change(){
    document.getElementById("img").style.height = "150px"
    document.getElementById("img").src = "https://cdn.britannica.com/75/174375-050-BC6968AE/Hazelnuts-fruit-compound-ovary-seed.jpg"
    document.getElementById("img").src = images[count]
    if (count === 1) {
        count = 0
    }else{
        count += 1
    }
}

function highlight(){
    document.getElementById("btn").style.backgroundColor = "orange"
    document.getElementById("btn").style.color = "white"
}

function normal(){
    document.getElementById("btn").style.backgroundColor = "gray"
    document.getElementById("btn").style.color = "black"
}

function show(){
    document.getElementById("hidden").style.display = "block"
}

function push(){
    document.getElementById("btn").style.backgroundColor = "green"
    document.getElementById("btn").style.color = "yellowgreen"
}

function highlight(){
    document.getElementById("btn").style.backgroundColor = "purple"
    document.getElementById("btn").style.color = "violet"
}

function pop(){
    window.alert("For real. Don't click this!")
}