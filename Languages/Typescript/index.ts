let hello = "world"; // hello is of type string

// explicitly describe this object’s shape
interface User { 
  name: string,
  id: number,
}

// declare a POJO as a type
const user: User = {
  name: "chris",
  id: 1,
};

// const badUser: User = {
//   username: "chris",
//   id: 1,
// };


