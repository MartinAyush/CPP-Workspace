const mongoose = require('mongoose');
const user = require(schema/User);

let newUser = mongoose.addOne(
    user.id = req.params.id,
    user.name = req.params.name,
    user.email = req.params.email,
    user.orgid = req.params.orgid;
)

newUser.save();
SELECT name
FROM orgamization
where user.id = orgamization.id;