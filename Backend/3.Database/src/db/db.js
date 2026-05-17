const mongoose = require('mongoose');



async function connectToDatabase() {
    await mongoose.connect("mongodb+srv://yt:EvnVeq5GIYagSOD5@cluster0.3qdoeus.mongodb.net/halley")

    console.log("Connected to database successfully");
}



module.exports = connectToDatabase;